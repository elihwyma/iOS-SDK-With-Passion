/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_name;
    NSURL *_pictureURL;
    NSString *_category;
    double _latitude;
    double _longitude;
    double _distance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSURL *pictureURL;
@property (retain) NSString *category;
@property double latitude;
@property double longitude;
@property double distance;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodableProperties;

@end
