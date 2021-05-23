/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface TIUserModelDataStoreEntry : NSObject

{
    NSDate *_timestamp;
    NSString *_key;
    NSString *_inputMode;
    NSNumber *_value;
    NSNumber *_secondaryValue;
    NSNumber *_realValue;
    NSData *_properties;
}

@property (retain) NSDate *timestamp;
@property (retain) NSString *key;
@property (retain) NSString *inputMode;
@property (retain) NSNumber *value;
@property (retain) NSNumber *secondaryValue;
@property (retain) NSNumber *realValue;
@property (retain) NSData *properties;

- (id)initWithTimestamp:(id)arg1 withKey:(id)arg2 withInputMode:(id)arg3 withValue:(id)arg4 withSecondaryValue:(id)arg5 withRealValue:(id)arg6 withProperties:(id)arg7;

@end
