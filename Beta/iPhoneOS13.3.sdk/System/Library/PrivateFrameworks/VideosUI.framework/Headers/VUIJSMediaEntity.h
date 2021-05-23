/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class MPMediaEntity, NSString, VUIJSMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIJSMediaEntity : IKJSObject

{
    VUIJSMediaEntityType *_type;
    NSString *_identifier;
    MPMediaEntity *_mediaEntity;
}

@property (retain, nonatomic) VUIJSMediaEntityType *type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) MPMediaEntity *mediaEntity;

+ (id)_mediaEntityTypeForMPMediaEntity:(id)arg1 mediaCategory:(id)arg2 mediaCollectionType:(id)arg3;
+ (id)_numberForString:(id)arg1;
+ (id)_stringForNumber:(id)arg1;
+ (_Bool)parseIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

- (id)description;
- (id)valuesForProperties:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 mediaCategory:(id)arg3 mediaCollectionType:(id)arg4;

@end
