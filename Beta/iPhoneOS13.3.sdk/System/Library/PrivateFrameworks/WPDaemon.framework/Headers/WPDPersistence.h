/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WPDPersistence : NSObject

{
    _Bool _isRangingEnabled;
    _Bool _needsInit;
    _Bool _systemFirstUnlocked;
    NSString *_bootUUID;
}

@property (nonatomic) _Bool needsInit;
@property (nonatomic) _Bool systemFirstUnlocked;
@property (retain, nonatomic) NSString *bootUUID;
@property (nonatomic) _Bool isRangingEnabled;

- (id)init;
- (void)dealloc;
- (id)currentBootSessionUUID;
- (void)synchronisePrefs;
- (void)writeBoolProperty:(id)arg1 Value:(_Bool)arg2;
- (void)writeStringProperty:(id)arg1 Value:(id)arg2;
- (id)readStringPropertyValue:(id)arg1;
- (_Bool)readBoolPropertyValue:(id)arg1;
- (void)firstUnlockedWithEvent:(_Bool)arg1;
- (void)deletePropertyValue:(id)arg1;

@end
