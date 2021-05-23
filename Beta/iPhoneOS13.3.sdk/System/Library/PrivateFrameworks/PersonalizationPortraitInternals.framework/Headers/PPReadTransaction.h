/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASSqliteDatabase;

@interface PPReadTransaction : NSObject

{
    _PASSqliteDatabase *_db;
}

@property (readonly) _PASSqliteDatabase *db;

- (id)initWithHandle:(id)arg1;

@end
