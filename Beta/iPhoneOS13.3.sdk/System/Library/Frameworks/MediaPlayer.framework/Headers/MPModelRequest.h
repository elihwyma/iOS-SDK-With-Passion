/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelKind, MPPropertySet, NSArray, NSString;

@interface MPModelRequest : NSObject <Swift>

{
    NSString *_label;
    MPModelKind *_sectionKind;
    MPPropertySet *_sectionProperties;
    NSArray *_sectionSortDescriptors;
    MPModelKind *_itemKind;
    MPPropertySet *_itemProperties;
    NSArray *_itemSortDescriptors;
}

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) MPModelKind *sectionKind;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (retain, nonatomic) MPModelKind *itemKind;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (retain, nonatomic) Class sectionClass;
@property (retain, nonatomic) Class itemClass;

+ (_Bool)supportsSecureCoding;
+ (id)sharedQueue;
+ (id)sharedNetworkQueue;
+ (_Bool)requiresNetwork;
+ (id)preferredQueue;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)_kindForClass:(Class)arg1;

@end
