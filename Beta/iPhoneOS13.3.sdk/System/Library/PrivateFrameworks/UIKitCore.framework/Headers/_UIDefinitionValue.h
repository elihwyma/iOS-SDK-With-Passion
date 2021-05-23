/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class MAAsset, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionValue : NSObject

{
    NSString *_localizedDictionaryName;
    NSString *_term;
    NSAttributedString *_definition;
    NSString *_longDefinition;
    MAAsset *_rawAsset;
}

@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *term;
@property (readonly) NSAttributedString *definition;
@property (readonly) NSString *longDefinition;
@property (retain, nonatomic) MAAsset *rawAsset;

- (id)description;
- (id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4;

@end
