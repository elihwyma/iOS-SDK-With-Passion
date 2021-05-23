/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSRecursiveLock, NSString, OKPresentation, UIColor;

@interface OKPresentationInfo : NSObject

{
    OKPresentation *_presentation;
    NSRecursiveLock *_infoLock;
    NSString *_uuid;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSString *_versionID;
    unsigned long long _format;
    unsigned long long _formatVersion;
    double _apiVersion;
    NSString *_producerIdentifier;
    double _producerVersion;
    _Bool _requiresProducer;
    NSMutableArray *_resolutions;
    _Bool _couchPotatoSupported;
    double _couchPotatoDelay;
    _Bool _motionSupported;
    _Bool _wheelControllerSupported;
    _Bool _overviewSupported;
    _Bool _trailerSupported;
    NSString *_trailerNavigatorName;
    NSString *_mainNavigatorName;
    NSString *_mainFeederName;
    UIColor *backgroundColor;
    _Bool _renderTimeLoggingSupported;
    double _couchPotatoStepDuration;
    UIColor *_backgroundColor;
}

@property (nonatomic) OKPresentation *presentation;
@property (copy) NSString *uuid;
@property (copy) NSDate *creationDate;
@property (copy) NSDate *lastModifiedDate;
@property (copy) NSString *versionID;
@property unsigned long long formatVersion;
@property double apiVersion;
@property unsigned long long format;
@property (copy) NSString *producerIdentifier;
@property double producerVersion;
@property _Bool requiresProducer;
@property (copy) NSArray *resolutions;
@property _Bool couchPotatoSupported;
@property double couchPotatoDelay;
@property _Bool motionSupported;
@property _Bool wheelControllerSupported;
@property _Bool overviewSupported;
@property _Bool trailerSupported;
@property (copy) NSString *trailerNavigatorName;
@property (copy) NSString *mainNavigatorName;
@property (copy) NSString *mainFeederName;
@property (retain) UIColor *backgroundColor;
@property _Bool renderTimeLoggingSupported;
@property double couchPotatoStepDuration;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (id)dictionary;
- (void)reset;
- (void)importFromDictionary:(id)arg1;

@end
