/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUICFQueryResult : NSObject

{
    _Bool _allowCallForDestinationID;
    _Bool _fromBlockList;
}

@property (nonatomic) _Bool allowCallForDestinationID;
@property (nonatomic, getter=isFromBlockList) _Bool fromBlockList;

- (id)description;

@end
