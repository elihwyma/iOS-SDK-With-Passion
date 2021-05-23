/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXBookmark;

@interface SXBookmarkAction : NSObject <Swift>

{
    id <SXBookmark> _bookmark;
}

@property (nonatomic, readonly) id <SXBookmark> bookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;

- (id)initWithBookmark:(id)arg1;

@end
