/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _CPPowerAssertion : NSObject

{
    unsigned int _assertion;
    double _timeout;
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (void)dealloc;
- (void)timedout;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end
