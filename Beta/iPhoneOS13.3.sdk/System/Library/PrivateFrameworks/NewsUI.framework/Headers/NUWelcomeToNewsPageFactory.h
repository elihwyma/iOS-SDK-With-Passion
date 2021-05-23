/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@protocol NURouter;

@interface NUWelcomeToNewsPageFactory : NSObject

{
    id <NURouter> _router;
}

@property (nonatomic, readonly) id <NURouter> router;

- (id)initWithRouter:(id)arg1;
- (id)createWelcomeToNewsPage;

@end
