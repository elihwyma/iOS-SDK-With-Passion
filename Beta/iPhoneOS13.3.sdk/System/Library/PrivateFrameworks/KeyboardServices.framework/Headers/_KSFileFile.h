/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <KeyboardServices/_KSFileEntry.h>

@class NSDate, NSURL;

@interface _KSFileFile : _KSFileEntry

{
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    unsigned long long _offset;
    unsigned long long _size;
}

+ (_Bool)supportsSecureCoding;
+ (int)protectionFromURL:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (unsigned long long)size;
- (id)contents;
- (id)URL;
- (id)lastModified;
- (void)consistencyCheck;
- (void)restoreToPath:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;
- (void)saveTo:(id)arg1;

@end
