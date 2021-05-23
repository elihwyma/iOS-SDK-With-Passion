/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject

{
    _Bool _confirmed;
    long long _keyFaceClusterSequenceNumber;
    NSString *_keyFaceLocalIdentifier;
    NSString *_personLocalIdentifier;
    long long _personFaceCount;
}

@property (nonatomic, readonly) long long keyFaceClusterSequenceNumber;
@property (copy, nonatomic, readonly) NSString *keyFaceLocalIdentifier;
@property (copy, nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) long long personFaceCount;
@property (nonatomic, readonly) _Bool confirmed;

- (id)description;
- (id)initWithSuggestionDictionary:(id)arg1;
- (id)suggestionDictionaryRepresentation;

@end
