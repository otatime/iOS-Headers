//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDSQLiteDatabase;

@protocol HDDatabaseMigrator <NSObject>
- (BOOL)migrateProtectedDatabaseToVersion:(int)arg1 withDatabase:(HDSQLiteDatabase *)arg2 error:(id *)arg3;
- (BOOL)migrateUnprotectedDatabaseToVersion:(int)arg1 withDatabase:(HDSQLiteDatabase *)arg2 error:(id *)arg3;
@end
