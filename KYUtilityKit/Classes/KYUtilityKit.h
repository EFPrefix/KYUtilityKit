//
//  KYUtilityKit.h
//  Pods
//
//  Created by Qitao Yang on 2020/4/3.
//

#if __has_include(<KYUtilityKit/KYUtilityKit.h>)
FOUNDATION_EXPORT double KYUtilityKitVersionNumber;
FOUNDATION_EXPORT const unsigned char KYUtilityKitVersionString[];
#import <KYUtilityKit/KYUtilityHelper.h>
#import <KYUtilityKit/UIView+TouchShrinkable.h>
#import <KYUtilityKit/KYControl.h>
#import <KYUtilityKit/NSObject+DeallocLog.h>
#import <KYUtilityKit/UIButton+VerticalLayout.h>
#else
#import "KYUtilityHelper.h"
#import "UIView+TouchShrinkable.h"
#import "KYControl.h"
#import "NSObject+DeallocLog.h"
#import "UIButton+VerticalLayout.h"
#endif

