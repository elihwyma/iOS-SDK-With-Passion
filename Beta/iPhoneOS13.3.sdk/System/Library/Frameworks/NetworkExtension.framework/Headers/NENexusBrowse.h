/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSUUID, NWBrowseDescriptor, NWParameters;

@interface NENexusBrowse : NSObject

{
    NWBrowseDescriptor *_descriptor;
    NWParameters *_parameters;
    NSUUID *_clientIdentifier;
}

@property (retain, nonatomic) NWBrowseDescriptor *descriptor;
@property (retain, nonatomic) NWParameters *parameters;
@property (retain, nonatomic) NSUUID *clientIdentifier;

@end
