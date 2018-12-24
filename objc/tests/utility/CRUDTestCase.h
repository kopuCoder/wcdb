/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "TableTestCase.h"

@interface CRUDTestCase : TableTestCase

- (BOOL)checkObject:(NSObject<WCTTableCoding>*)object
                     andSQL:(NSString*)sql
asExpectedAfterModification:(BOOL (^)())block;

- (BOOL)checkObjects:(NSArray<NSObject<WCTTableCoding>*>*)objects
                     andSQL:(NSString*)sql
asExpectedAfterModification:(BOOL (^)())block;

- (BOOL)checkObjects:(NSArray<NSObject<WCTTableCoding>*>*)objects
                    andSQLs:(NSArray<NSString*>*)sqls
asExpectedAfterModification:(BOOL (^)())block;

- (BOOL)checkObjects:(NSArray<NSObject<WCTTableCoding>*>*)objects
            andInsertSQL:(NSString*)insertSQL
               withCount:(int)count
asExpectedAfterInsertion:(BOOL (^)())block;

- (BOOL)checkObject:(NSObject<WCTTableCoding>*)object
               andSQL:(NSString*)sql
asExpectedBySelecting:(NSArray<NSObject<WCTTableCoding>*>* (^)())block;

- (BOOL)checkObjects:(NSArray<NSObject<WCTTableCoding>*>*)objects
               andSQL:(NSString*)sql
asExpectedBySelecting:(NSArray<NSObject<WCTTableCoding>*>* (^)())block;

- (BOOL)checkObjects:(NSArray<NSObject<WCTTableCoding>*>*)expectedObjects
              andSQLs:(NSArray<NSString*>*)expectedSQLs
asExpectedBySelecting:(NSArray<NSObject<WCTTableCoding>*>* (^)())block;

- (BOOL)checkRow:(WCTOneRow*)row
               andSQL:(NSString*)sql
asExpectedBySelecting:(WCTOneRow* (^)())block;

- (BOOL)checkColumn:(WCTOneColumn*)column
               andSQL:(NSString*)sql
asExpectedBySelecting:(WCTOneColumn* (^)())block;

- (BOOL)checkValue:(WCTValue*)value
               andSQL:(NSString*)sql
asExpectedBySelecting:(WCTValue* (^)())block;

- (BOOL)checkRows:(WCTColumnsXRows*)rows
               andSQL:(NSString*)sql
asExpectedBySelecting:(WCTColumnsXRows* (^)())block;

- (BOOL)checkRows:(WCTColumnsXRows*)rows
              andSQLs:(NSArray<NSString*>*)sqls
asExpectedBySelecting:(WCTColumnsXRows* (^)())block;

@end
