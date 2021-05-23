/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationship : NSObject

{
    NSString *mIdentifier;
    NSString *mType;
    int mTargetMode;
    NSURL *mTargetLocation;
}

- (id)type;
- (id)identifier;
- (id)targetLocation;
- (int)targetMode;
- (void)readFromElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;
- (id)initWithXmlElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;

@end
