/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXEmailAction : NSObject <Swift>

{
    NSString *_recipient;
    NSString *_subject;
}

@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;

- (id)initWithRecipient:(id)arg1 subject:(id)arg2;

@end
