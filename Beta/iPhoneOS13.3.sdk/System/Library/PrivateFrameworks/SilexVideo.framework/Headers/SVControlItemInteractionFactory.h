/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVInteractionContextFactory;

@interface SVControlItemInteractionFactory : NSObject

{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property (nonatomic, readonly) id <SVInteractionContextFactory> interactionContextFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithInteractionContextFactory:(id)arg1;
- (id)createInteractionWithControlItem:(id)arg1;

@end
