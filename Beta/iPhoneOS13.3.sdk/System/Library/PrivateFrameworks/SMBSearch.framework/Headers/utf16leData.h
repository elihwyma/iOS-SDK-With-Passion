/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface utf16leData : NSObject

{
    unsigned int _charCount;
    unsigned int _byteCount;
    NSData *_datab;
}

@property (retain) NSData *datab;
@property unsigned int charCount;
@property unsigned int byteCount;

- (id)initWithStr:(id)arg1;

@end
