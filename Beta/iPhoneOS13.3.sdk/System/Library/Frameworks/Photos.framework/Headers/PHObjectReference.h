/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface PHObjectReference : NSObject

{
    NSString *_representedType;
    NSString *_localIdentifier;
    NSURL *_libraryURL;
}

@property (copy, nonatomic, readonly) NSURL *libraryURL;
@property (copy, nonatomic, readonly) NSString *representedType;
@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)representedType;
+ (id)referenceForObject:(id)arg1;
+ (id)filteredObjectReferences:(id)arg1 inPhotoLibrary:(id)arg2;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;

@end
