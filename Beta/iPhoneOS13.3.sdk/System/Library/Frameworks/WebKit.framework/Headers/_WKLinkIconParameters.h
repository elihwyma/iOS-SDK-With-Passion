/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface _WKLinkIconParameters : NSObject

{
    struct RetainPtr<NSURL> _url;
    long long _iconType;
    struct RetainPtr<NSString> _mimeType;
    struct RetainPtr<NSNumber> _size;
    struct RetainPtr<NSMutableDictionary> _attributes;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long iconType;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (copy, nonatomic, readonly) NSNumber *size;
@property (copy, nonatomic, readonly) NSDictionary *attributes;

- (id).cxx_construct;
- (id)_initWithLinkIcon:(const struct LinkIcon *)arg1;

@end
