/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FBApplicationTerminationAssertion : NSObject

{
    NSString *_bundleID;
    NSString *_reason;
    unsigned long long _serialNumber;
    id _plugInHoldToken;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long serialNumber;
@property (retain, nonatomic) id plugInHoldToken;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
