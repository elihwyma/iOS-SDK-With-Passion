/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADDrawableProperties;

@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject

{
    _Bool mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

@property (weak) OADDrawable<OADDrawableContainer> *parent;

+ (unsigned int)generateOADDrawableId:(id)arg1;

- (id)description;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)drawableProperties;
- (void)setDrawableProperties:(id)arg1;
- (unsigned int)id;
- (id)clientData;
- (void)setId:(unsigned int)arg1;
- (void)setClientData:(id)arg1;
- (void)setAltId:(unsigned int)arg1;
- (void)removeUnnecessaryOverrides;
- (id)initWithPropertiesClass:(Class)arg1;
- (unsigned int)altId;
- (id)ensureClientDataOfClass:(Class)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (id)createWordClientDataWithTextType:(int)arg1;

@end
