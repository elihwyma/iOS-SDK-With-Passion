/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@protocol RestrictionProtocol;

@interface cRestrictionArray : NSObject

{
    _Bool _isPresent;
    NSObject<RestrictionProtocol> *_restriction;
}

@property (readonly) _Bool isPresent;
@property (retain) NSObject<RestrictionProtocol> *restriction;

- (id)init;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithRestriction:(id)arg1;

@end
