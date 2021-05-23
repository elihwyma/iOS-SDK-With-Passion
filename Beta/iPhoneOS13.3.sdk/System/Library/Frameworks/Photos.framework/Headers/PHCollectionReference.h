/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObjectReference.h>

@class NSString;

@interface PHCollectionReference : PHObjectReference

{
    NSString *_transientIdentifier;
    NSString *_transientTitle;
}

@property (nonatomic, readonly) _Bool transient;
@property (copy, nonatomic, readonly) NSString *transientIdentifier;
@property (copy, nonatomic, readonly) NSString *transientTitle;

+ (id)representedType;

- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4;
- (id)_transientCollectionInLibrary:(id)arg1;

@end
