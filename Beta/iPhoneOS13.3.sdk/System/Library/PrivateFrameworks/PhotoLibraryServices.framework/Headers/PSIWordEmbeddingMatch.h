/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject

{
    NSString *_word;
    NSString *_extendedWord;
    double _score;
}

@property (readonly) NSString *word;
@property (readonly) NSString *extendedWord;
@property (readonly) double score;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3;

@end
