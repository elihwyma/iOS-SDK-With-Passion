/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CKLEventFilter : NSObject

{
    _Bool _simulatorMessagesOnly;
    unsigned long long _logTypes;
    NSString *_processName;
    NSDictionary *_categoriesBySubsystem;
}

@property (nonatomic) unsigned long long logTypes;
@property (retain, nonatomic) NSDictionary *categoriesBySubsystem;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) _Bool simulatorMessagesOnly;

- (id)initWithLogTypes:(unsigned long long)arg1;
- (_Bool)matchesEvent:(id)arg1;
- (_Bool)hasLogType:(unsigned long long)arg1;
- (_Bool)hasOnlyLogType:(unsigned long long)arg1;
- (void)_initFilterDict;

@end
