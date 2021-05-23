/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface MLModelMetadata : NSObject

{
    NSString *_name;
    NSString *_shortDescription;
    NSString *_versionString;
    NSString *_author;
    NSString *_license;
    NSDictionary *_creatorDefined;
}

@property (readonly) NSString *name;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *versionString;
@property (readonly) NSString *author;
@property (readonly) NSString *license;
@property (readonly) NSDictionary *creatorDefined;

- (id)debugDescription;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortDescription:(id)arg2 versionString:(id)arg3 author:(id)arg4 license:(id)arg5 creatorDefined:(id)arg6;

@end
