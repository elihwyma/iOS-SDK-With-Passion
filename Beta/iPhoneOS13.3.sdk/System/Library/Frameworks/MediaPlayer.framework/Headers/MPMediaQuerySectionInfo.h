/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <Swift>

{
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    _Bool _hasUnknownSection;
}

@property (copy, nonatomic) NSArray *sectionIndexTitles;
@property (copy, nonatomic, readonly) NSArray *sections;
@property (nonatomic) _Bool hasUnknownSection;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;

@end
