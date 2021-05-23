/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTPowerAssertion : NSObject

{
    unsigned int _assertionID;
    NSString *_name;
    double _assertionTimeout;
}

@property (nonatomic, readonly) double assertionTimeout;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)releaseAssertion;
- (id)initWithName:(id)arg1 assertionTimeout:(double)arg2;
- (void)takeAssertion;

@end
