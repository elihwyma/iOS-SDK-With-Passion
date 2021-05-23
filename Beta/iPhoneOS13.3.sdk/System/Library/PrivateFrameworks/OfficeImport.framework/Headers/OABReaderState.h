/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ESDContainer, NSMutableArray, NSMutableDictionary;

@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OABReaderState : NSObject

{
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id <OADColorPalette> mColorPalette;
    NSMutableArray *mGroupStack;
    ESDContainer *mBstoreContainerHolder;
}

@property (retain, nonatomic) ESDContainer *bstoreContainerHolder;

- (id)init;
- (Class)client;
- (id)initWithClient:(Class)arg1;
- (void)pushGroup:(id)arg1;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (_Bool)isInsideGroup;
- (id)peekGroup;
- (id)drawableForShapeId:(int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (void)resetForNewDrawing;
- (id)popGroup;
- (id)groupStackReference;
- (_Bool)useXmlBlobs;
- (id)contentObjectForId:(int)arg1;
- (void)setContentObject:(id)arg1 forId:(int)arg2;
- (int)groupDepth;
- (id)xmlDrawingState;

@end
