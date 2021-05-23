/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FCTranslationMap : NSObject

{
    NSString *_resourceID;
    NSDictionary *_topicTranslationMap;
    NSDictionary *_favoriteTranslationMap;
}

@property (retain, nonatomic) NSString *resourceID;
@property (retain, nonatomic) NSDictionary *topicTranslationMap;
@property (retain, nonatomic) NSDictionary *favoriteTranslationMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)topicTranslationForTagID:(id)arg1;
- (id)favoriteTranslationForTagID:(id)arg1;
- (id)initWithPBTranslationMap:(id)arg1 resourceID:(id)arg2;

@end
