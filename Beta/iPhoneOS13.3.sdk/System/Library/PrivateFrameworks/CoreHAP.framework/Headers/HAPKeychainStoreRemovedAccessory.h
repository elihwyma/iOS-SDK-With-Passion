/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSDate, NSError, NSString;

@interface HAPKeychainStoreRemovedAccessory : HMFObject

{
    NSString *_accessoryName;
    NSDate *_creationDate;
    NSError *_removeError;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) NSError *removeError;

- (id)description;
- (id)initWithName:(id)arg1 creationDate:(id)arg2;

@end
