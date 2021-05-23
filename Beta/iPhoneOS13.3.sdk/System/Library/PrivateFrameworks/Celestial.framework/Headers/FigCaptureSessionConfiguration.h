/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <Swift>

{
    NSMutableArray *_connections;
    long long _configurationID;
    _Bool _usesAppAudioSession;
    _Bool _configuresAppAudioSession;
    _Bool _allowedToRunInWindowedLayout;
    _Bool _isMultiCamSession;
    _Bool _xctestAuthorizedToStealDevice;
}

@property (nonatomic) long long configurationID;
@property (nonatomic, readonly) NSArray *connectionConfigurations;
@property (nonatomic, readonly) NSArray *sourceConfigurations;
@property (nonatomic, readonly) NSArray *sinkConfigurations;
@property (nonatomic) _Bool usesAppAudioSession;
@property (nonatomic) _Bool configuresAppAudioSession;
@property (nonatomic) _Bool allowedToRunInWindowedLayout;
@property (nonatomic, getter=isMultiCamSession) _Bool multiCamSession;
@property (nonatomic) _Bool xctestAuthorizedToStealDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addConnectionConfiguration:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)removeConnectionConfiguration:(id)arg1;

@end
