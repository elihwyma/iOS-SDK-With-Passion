/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSArray, NSData, WebArchivePrivate, WebResource;

@interface WebArchive : NSObject <Swift>

{
    WebArchivePrivate *_private;
}

@property (nonatomic, readonly) WebResource *mainResource;
@property (copy, nonatomic, readonly) NSArray *subresources;
@property (copy, nonatomic, readonly) NSArray *subframeArchives;
@property (copy, nonatomic, readonly) NSData *data;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)_initWithCoreLegacyWebArchive:(RefPtr_a4a1529f *)arg1;
- (struct LegacyWebArchive *)_coreLegacyWebArchive;

@end
