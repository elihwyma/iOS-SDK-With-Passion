/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

#import <LoginKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface LKUsers : NSObject <Swift>

{
    NSArray *_students;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *students;

- (id)initWithUsers:(id)arg1;

@end
