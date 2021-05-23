/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVInteractionContextFactory;

@interface SVControlInteractionFactory : NSObject

{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property (nonatomic, readonly) id <SVInteractionContextFactory> interactionContextFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInteractionWithControl:(id)arg1 events:(unsigned long long)arg2;
- (id)initWithInteractionContextFactory:(id)arg1;

@end
