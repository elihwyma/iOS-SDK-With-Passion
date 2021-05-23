/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject

{
    AFCallSiteInfo *_baseModel;
    NSString *_imagePath;
    NSString *_symbolName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasImagePath:1;
        unsigned int hasSymbolName:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setImagePath:(id)arg1;
- (void)setSymbolName:(id)arg1;

@end
