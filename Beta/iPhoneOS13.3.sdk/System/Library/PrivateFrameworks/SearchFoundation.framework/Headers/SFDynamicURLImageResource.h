/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFDynamicURLImageResource : NSObject <Swift>

{
    struct {
        unsigned int pixelWidth:1;
        unsigned int pixelHeight:1;
        unsigned int supportsResizing:1;
    } _has;
    _Bool _supportsResizing;
    double _pixelWidth;
    double _pixelHeight;
    NSString *_formatURL;
    NSArray *_imageOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) _Bool supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasPixelWidth;
- (_Bool)hasPixelHeight;
- (_Bool)hasSupportsResizing;
- (id)_sf_urlForSettings:(id)arg1 shouldResize:(_Bool)arg2 width:(double)arg3 height:(double)arg4;
- (id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2;
- (id)sf_urlForSettings:(id)arg1;
- (id)sf_urlForSettings:(id)arg1 size:(struct CGSize)arg2;

@end
