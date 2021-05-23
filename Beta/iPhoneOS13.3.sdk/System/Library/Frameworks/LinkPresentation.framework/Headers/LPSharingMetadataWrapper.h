/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject

{
    _Bool _hasFetchedSubresources;
    _Bool _hasCompletedFetch;
    LPLinkMetadata *_metadata;
}

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic) _Bool hasFetchedSubresources;
@property (nonatomic) _Bool hasCompletedFetch;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;

@end
