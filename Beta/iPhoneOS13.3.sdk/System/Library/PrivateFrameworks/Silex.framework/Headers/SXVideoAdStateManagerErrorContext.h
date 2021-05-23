/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface SXVideoAdStateManagerErrorContext : NSObject

{
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithError:(id)arg1;

@end
