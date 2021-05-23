/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject

{
    NSNumber *_syncStateIntervalMillis;
    NSNumber *_updateNoteWhenIdleForMillis;
    NSNumber *_updateNoteDuringEditIntervalMillis;
}

@property (retain, nonatomic) NSNumber *syncStateIntervalMillis;
@property (retain, nonatomic) NSNumber *updateNoteWhenIdleForMillis;
@property (retain, nonatomic) NSNumber *updateNoteDuringEditIntervalMillis;

+ (id)structName;
+ (id)structFields;

@end
