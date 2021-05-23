/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3QuerySection : NSObject

{
    unsigned long long _sectionIndex;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned long long sectionIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned long long)arg2;

@end
