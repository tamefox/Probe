//
//  ProbeSDK.h
//  Probe
//
//  Created by fodlab on 2020/1/17.
//  Copyright © 2020 fodlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TaurusXAds/TXADTracker.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProbeSDK : NSObject

+ (ProbeSDK *)getInstance;

@property (nonatomic) BOOL reportOff;


-(void)start;


- (void)registerDelegate: (id <TXADTrackerDelegate>)delegate;
- (void)unRegisterDelegate: (id <TXADTrackerDelegate>)delegate;

+ (NSInteger)getSdkVersionCode;
+ (NSString *)getSdkVersion;

-(void)setTestMode;

@end

NS_ASSUME_NONNULL_END
