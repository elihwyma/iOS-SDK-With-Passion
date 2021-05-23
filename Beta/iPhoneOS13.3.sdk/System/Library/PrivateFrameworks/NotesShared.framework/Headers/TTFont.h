/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TTFont : NSObject

{
    unsigned int _fontHints;
    NSString *_fontName;
    double _pointSize;
    id _nativeFont;
}

@property (retain, nonatomic) id nativeFont;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) unsigned int fontHints;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)saveToArchive:(struct Font *)arg1;
- (id)initWithArchive:(const struct Font *)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned int)arg3;

@end
