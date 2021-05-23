/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelKind, MPPropertySet, NSString;

@interface MPModelLibrarySearchScope : NSObject <Swift>

{
    shared_ptr_c450ebdb _coreScope;
    MPModelKind *_itemKind;
    NSString *_name;
    MPPropertySet *_itemProperties;
}

@property (nonatomic, readonly) shared_ptr_c450ebdb coreScope;
@property (retain, nonatomic) MPModelKind *itemKind;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) MPPropertySet *itemProperties;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3;

@end
