/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol ISCompositorRecipe;

@interface ISCompositor : NSObject

{
    unsigned long long _renderingMode;
    NSMutableArray *_elements;
}

@property (retain) id <ISCompositorRecipe> recipe;
@property (retain) NSMutableArray *elements;
@property (readonly) _Bool canUseCoreImage;
@property unsigned long long renderingMode;

+ (id)iosmacAppIconRecipe;
+ (id)macosIconRecipe;
+ (id)iosAppIconRecipe;
+ (id)watchAppIconRecipe;
+ (id)messagesAppIconRecipeWithBorder:(_Bool)arg1;
+ (id)macosDocumentRecipe;
+ (id)iosmacDocumentRecipe;
+ (id)iosAppBadgeDocumentRecipe;
+ (id)iosGlyphBadgeDocumentRecipe;

- (id)init;
- (void)reset;
- (void)addElement:(id)arg1;
- (void)drawInContext:(id)arg1;
- (void)clearResources;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)addResourcesFromDictionary:(id)arg1;
- (void)addElementWithRecipe:(id)arg1 resources:(id)arg2;
- (id)initWithRecipe:(id)arg1;
- (void)setResource:(id)arg1 named:(id)arg2;
- (void)drawElement:(id)arg1 inContext:(id)arg2;
- (id)filterForLayer:(id)arg1 scale:(double)arg2 resourceProvider:(id)arg3;
- (void)drawLayer:(id)arg1 resourceProvider:(id)arg2 inContext:(id)arg3;
- (id)maskImageForLayer:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resourceProvider:(id)arg4;
- (id)scaledImageFromContent:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
