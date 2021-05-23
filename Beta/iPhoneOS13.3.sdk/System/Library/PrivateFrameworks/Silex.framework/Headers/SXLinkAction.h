/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SXLinkAction : NSObject

{
    NSURL *_URL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSURL *URL;

- (id)initWithURL:(id)arg1;

@end
