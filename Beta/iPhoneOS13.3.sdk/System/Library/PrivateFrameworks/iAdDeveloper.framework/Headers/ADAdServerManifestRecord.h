/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ADAdServerManifestRecord : NSObject

{
    _Bool _updateInProgress;
    _Bool _temporary;
    NSString *_name;
    NSURL *_URL;
    NSDictionary *_manifest;
    double _lastUpdate;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool temporary;
@property (nonatomic) double lastUpdate;
@property (retain, nonatomic) NSDictionary *manifest;
@property (nonatomic) _Bool updateInProgress;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
