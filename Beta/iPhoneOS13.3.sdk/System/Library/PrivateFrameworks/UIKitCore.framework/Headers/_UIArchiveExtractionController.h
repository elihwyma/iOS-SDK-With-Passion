/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _UIArchiveExtractionController : NSObject

{
    NSArray *_extractedContentAbsolutePaths;
    NSString *_sourceArchivePath;
    NSString *_destinationExtractionRootPath;
    NSString *_destinationContentProtectionType;
    NSString *_sourceArchiveExtractionRootPath;
}

@property (nonatomic, readonly) NSString *sourceArchivePath;
@property (retain, nonatomic) NSString *destinationExtractionRootPath;
@property (retain, nonatomic) NSString *destinationContentProtectionType;
@property (retain, nonatomic) NSString *sourceArchiveExtractionRootPath;

- (_Bool)_createDestinationRoot:(id *)arg1;
- (id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2;
- (_Bool)extractArchiveContent:(id *)arg1;
- (id)extractedContentAbsolutePathsMatchingPredicate:(CDUnknownBlockType)arg1;

@end
