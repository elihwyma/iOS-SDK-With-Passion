/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSArray, NSDictionary, NSString, NSURL, SCNAssetCatalog;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver

{
    NSURL *_documentURL;
    NSDictionary *_context;
    SCNAssetCatalog *_assetCatalog;
    NSString *_lookUpKey;
    id _lookUpFoundInstance;
    NSArray *_currentMorphTargets;
}

@property (retain, nonatomic) NSArray *currentMorphTargets;
@property (retain, nonatomic) NSURL *documentURL;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) SCNAssetCatalog *assetCatalog;
@property (retain, nonatomic) NSString *lookUpKey;
@property (retain, nonatomic) id lookUpFoundInstance;
@property (nonatomic, readonly) NSURL *documentEnclosingURL;

- (void)dealloc;
- (id)initForReadingWithData:(id)arg1 secure:(_Bool)arg2;

@end
