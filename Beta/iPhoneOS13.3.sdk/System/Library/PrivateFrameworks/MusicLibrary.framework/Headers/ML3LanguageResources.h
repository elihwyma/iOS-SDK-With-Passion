/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject

{
    NSDictionary *_sectionsInfo;
    NSDictionary *_sortingDetails;
    NSString *_canonicalLanguageIdentifier;
}

@property (nonatomic, readonly) NSDictionary *sectionsInfo;
@property (nonatomic, readonly) NSDictionary *sortingDetails;
@property (nonatomic, readonly) NSString *canonicalLanguageIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3;

@end
