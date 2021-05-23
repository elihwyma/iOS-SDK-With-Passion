/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMLazyMap, NSNumber, NSString;

@interface EDAMResourceAttributes : FATObject

{
    NSString *_sourceURL;
    NSNumber *_timestamp;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_altitude;
    NSString *_cameraMake;
    NSString *_cameraModel;
    NSNumber *_clientWillIndex;
    NSString *_recoType;
    NSString *_fileName;
    NSNumber *_attachment;
    EDAMLazyMap *_applicationData;
}

@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *altitude;
@property (retain, nonatomic) NSString *cameraMake;
@property (retain, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSNumber *clientWillIndex;
@property (retain, nonatomic) NSString *recoType;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSNumber *attachment;
@property (retain, nonatomic) EDAMLazyMap *applicationData;

+ (id)structName;
+ (id)structFields;

@end
