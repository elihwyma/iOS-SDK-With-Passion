/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIColorScheme;

@protocol SKUIArtworkProviding;

@interface SKUIUber : NSObject

{
    SKUIColorScheme *_colorScheme;
    NSString *_text;
    id <SKUIArtworkProviding> _artworkProvider;
}

@property (nonatomic, readonly) id <SKUIArtworkProviding> artworkProvider;
@property (nonatomic, readonly) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) NSString *text;

- (id)initWithUberDictionary:(id)arg1;

@end
