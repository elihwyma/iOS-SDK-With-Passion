/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol ASTConnection;

@interface ASTNetworkObject : NSObject

{
    id <ASTConnection> _connection;
    NSMutableData *_receivedData;
}

@property (retain, nonatomic) id <ASTConnection> connection;
@property (retain, nonatomic) NSMutableData *receivedData;

@end
